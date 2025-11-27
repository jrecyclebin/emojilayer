//
// Code generated in a few minutes by GLM 4.8 and Opencode.
// Consider it MIT licensed and sorry if there are issues,
// I'm sure I'll discover them myself!
//

/**
 * Convert a Unicode character to its hex code point
 * @param {string} char - Single Unicode character
 * @returns {string} - Hex code point without '0x' prefix
 */
function charToHexCode(char) {
    const codePoint = char.codePointAt(0);
    return codePoint.toString(16).toLowerCase();
}

/**
 * Sanitize input to handle edge cases
 * @param {string} text - Raw input text
 * @returns {string} - Sanitized text
 */
function sanitizeInput(text) {
    // Remove control characters except newlines and tabs
    return text.replace(/[\x00-\x08\x0B\x0C\x0E-\x1F\x7F]/g, '');
}

/**
 * Enhanced conversion with error handling
 * @param {string} text - Unicode text input
 * @returns {string} - Formatted IBUS_MACRO calls or error message
 */
function convertToIbusMacros(text) {
    const sanitizedText = sanitizeInput(text);
    
    if (!sanitizedText || sanitizedText.trim() === '') {
        return '';
    }
    
    try {
        const chars = Array.from(sanitizedText);
        const macros = chars.map(char => {
            const hexCode = charToHexCode(char);
            return `IBUS_MACRO("${hexCode}");`;
        });
        
        return macros.join('\n');
    } catch (error) {
        console.error('Conversion error:', error);
        return '// Error: Unable to convert some characters';
    }
}

// DOM elements
const unicodeInput = document.getElementById('unicode-input');
const ibusOutput = document.getElementById('ibus-output');
const copyBtn = document.getElementById('copy-btn');

/**
 * Enhanced update function with error handling
 */
function updateOutput() {
    try {
        const inputText = unicodeInput.value;
        const ibusCode = convertToIbusMacros(inputText);
        ibusOutput.textContent = ibusCode;
        
        // Remove error styling if present
        ibusOutput.style.color = '';
    } catch (error) {
        console.error('Update error:', error);
        ibusOutput.textContent = '// Error: Invalid input';
        ibusOutput.style.color = '#e74c3c';
    }
}

/**
 * Copy output to clipboard
 */
async function copyToClipboard() {
    const text = ibusOutput.textContent;
    
    if (!text) {
        return;
    }
    
    try {
        await navigator.clipboard.writeText(text);
        
        // Visual feedback
        const originalText = copyBtn.textContent;
        copyBtn.textContent = 'Copied!';
        copyBtn.style.background = '#27ae60';
        
        setTimeout(() => {
            copyBtn.textContent = originalText;
            copyBtn.style.background = '';
        }, 2000);
    } catch (err) {
        console.error('Failed to copy:', err);
        
        // Fallback for older browsers
        const textArea = document.createElement('textarea');
        textArea.value = text;
        document.body.appendChild(textArea);
        textArea.select();
        document.execCommand('copy');
        document.body.removeChild(textArea);
        
        // Visual feedback for fallback
        const originalText = copyBtn.textContent;
        copyBtn.textContent = 'Copied!';
        copyBtn.style.background = '#27ae60';
        
        setTimeout(() => {
            copyBtn.textContent = originalText;
            copyBtn.style.background = '';
        }, 2000);
    }
}

// Event listeners
unicodeInput.addEventListener('input', updateOutput);
copyBtn.addEventListener('click', copyToClipboard);

// Initialize
updateOutput();
