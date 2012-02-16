/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/APFormatter.h>


__attribute__((visibility("hidden")))
@interface MinMaxIntFormatter : APFormatter {
	int _minimum;	// 16 = 0x10
	int _maximum;	// 20 = 0x14
}
@property(assign) int maximum;	// G=0x8c745; S=0x8c735; converted property
@property(assign) int minimum;	// G=0x8c725; S=0x8c715; converted property
+ (id)formatterForMin:(int)min max:(int)max;	// 0x8c655
- (BOOL)isPartialStringValid:(id)valid newEditingString:(id *)string errorDescription:(id *)description;	// 0x8c755
// converted property getter: - (int)maximum;	// 0x8c745
// converted property setter: - (void)setMaximum:(int)maximum;	// 0x8c735
// converted property getter: - (int)minimum;	// 0x8c725
// converted property setter: - (void)setMinimum:(int)minimum;	// 0x8c715
- (id)initWithMin:(int)min max:(int)max;	// 0x8c699
@end