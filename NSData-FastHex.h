//
//  NSData-FastHex.h
//  Pods
//
//  Created by Jonathon Mah on 2015-05-13.
//
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface NSData (FastHex)

/** Returns an NSData instance constructed from the hex characters of the passed string.
 * A convenience method for \p -initWithHexString:ignoreOtherCharacters: with the value
 * YES for \p ignoreOtherCharacters . */
+ (instancetype)dataWithHexString:(NSString *)hexString;

/** Initializes the NSData instance with data from the hex characters of the passed string.
 *
 * \param hexString A string containing ASCII hexadecimal characters (uppercase and lowercase accepted).
 * \param ignoreOtherCharacters If YES, skips non-hexadecimal characters, and trailing characters.
 *  If NO, non-hexadecimal or trailing characters will abort parsing and this method will return nil.
 *
 * \return the initialized data instance, or nil if \p ignoreOtherCharacters is NO and \p hexString
 * contains a non-hex or trailing character. If \p hexString is the empty string, returns an empty
 * (non-nil) NSData instance. */
- (nullable instancetype)initWithHexString:(NSString *)hexString ignoreOtherCharacters:(BOOL)ignoreOtherCharacters;

/** Returns a string of the receiver's data bytes as uppercase hexadecimal characters. */
- (NSString *)hexStringRepresentation;

@end

NS_ASSUME_NONNULL_END
