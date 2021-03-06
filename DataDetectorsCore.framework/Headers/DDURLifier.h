/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>



@interface DDURLifier : NSObject {
}
+ (id)urlIfyNode:(id)node usingScanner:(DDScannerRef)scanner phoneNumberTypes:(unsigned)types withReferenceDate:(id)referenceDate andTimeZone:(id)zone;	// 0x97ed
+ (id)urlIfyNode:(id)node usingScanner:(DDScannerRef)scanner phoneNumberTypes:(unsigned)types;	// 0x97c1
+ (BOOL)urlIfyNode:(id)node;	// 0x97a9
+ (BOOL)urlIfyNode:(id)node phoneNumberTypes:(unsigned)types;	// 0x9655
+ (BOOL)urlIfyTextNode:(id)node inNode:(id)node2 forMatches:(id)matches;	// 0x94cd
+ (id)urlMatchesForString:(id)string usingScanner:(DDScannerRef)scanner withPhoneNumberTypes:(unsigned)phoneNumberTypes referenceDate:(id)date timeZone:(id)zone storingResultsIn:(id)anIn;	// 0x9375
+ (id)urlMatchesForString:(id)string phoneNumberTypes:(unsigned)types;	// 0x9091
+ (id)urlMatchesForString:(id)string includingTel:(BOOL)tel;	// 0x9071
+ (id)urlMatchesForString:(id)string;	// 0x905d
+ (void)initialize;	// 0x901d
@end
