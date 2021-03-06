/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMDirectionsOptionDefinition : XXUnknownSuperclass {
	int _optionID;	// 4 = 0x4
	NSString *_optionText;	// 8 = 0x8
	int _type;	// 12 = 0xc
	NSMutableArray *_allowableValues;	// 16 = 0x10
	int _defaultValue;	// 20 = 0x14
}
@property(assign, nonatomic) int defaultValue;	// G=0x1dc41; S=0x1dc51; @synthesize=_defaultValue
@property(retain, nonatomic) NSMutableArray *allowableValues;	// G=0x1dc0d; S=0x1dc1d; @synthesize=_allowableValues
@property(assign, nonatomic) int type;	// G=0x1dbed; S=0x1dbfd; @synthesize=_type
@property(retain, nonatomic) NSString *optionText;	// G=0x1dbb9; S=0x1dbc9; @synthesize=_optionText
@property(assign, nonatomic) int optionID;	// G=0x1db99; S=0x1dba9; @synthesize=_optionID
// declared property setter: - (void)setDefaultValue:(int)value;	// 0x1dc51
// declared property getter: - (int)defaultValue;	// 0x1dc41
// declared property setter: - (void)setAllowableValues:(id)values;	// 0x1dc1d
// declared property getter: - (id)allowableValues;	// 0x1dc0d
// declared property setter: - (void)setType:(int)type;	// 0x1dbfd
// declared property getter: - (int)type;	// 0x1dbed
// declared property setter: - (void)setOptionText:(id)text;	// 0x1dbc9
// declared property getter: - (id)optionText;	// 0x1dbb9
// declared property setter: - (void)setOptionID:(int)anId;	// 0x1dba9
// declared property getter: - (int)optionID;	// 0x1db99
- (void)writeTo:(id)to;	// 0x1da45
- (BOOL)readFrom:(id)from;	// 0x1d899
- (id)dictionaryRepresentation;	// 0x1d77d
- (id)description;	// 0x1d70d
- (id)allowableValuesAtIndex:(unsigned)index;	// 0x1d6ed
- (unsigned)allowableValuesCount;	// 0x1d6cd
- (void)addAllowableValues:(id)values;	// 0x1d669
- (void)dealloc;	// 0x1d611
@end
