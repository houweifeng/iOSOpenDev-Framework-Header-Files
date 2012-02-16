/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMProperty.h>


__attribute__((visibility("hidden")))
@interface CMLengthProperty : CMProperty {
@private
	double value;	// 8 = 0x8
	int unitType;	// 16 = 0x10
}
@property(readonly, assign) double value;	// G=0x1480b9; converted property
@property(readonly, assign) int unitType;	// G=0x1480d1; converted property
+ (id)cssStringValue:(double)value unit:(int)unit;	// 0x401d
- (id)initWithNumber:(double)number;	// 0xfa11d
- (id)initWithNumber:(double)number unit:(int)unit;	// 0x5755
// converted property getter: - (double)value;	// 0x1480b9
- (int)intValue;	// 0x2f52cd
// converted property getter: - (int)unitType;	// 0x1480d1
- (int)compareValue:(id)value;	// 0x2f52e9
- (id)cssStringForName:(id)name;	// 0x5849
- (id)cssString;	// 0xfd3d9
@end