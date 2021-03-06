/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class NSMutableArray;

@interface LBSGAddress : XXUnknownSuperclass {
	NSMutableArray *_formattedAddressLines;	// 4 = 0x4
	NSMutableArray *_components;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *components;	// G=0x2a57d; S=0x2a58d; @synthesize=_components
@property(retain, nonatomic) NSMutableArray *formattedAddressLines;	// G=0x2a549; S=0x2a559; @synthesize=_formattedAddressLines
// declared property setter: - (void)setComponents:(id)components;	// 0x2a58d
// declared property getter: - (id)components;	// 0x2a57d
// declared property setter: - (void)setFormattedAddressLines:(id)lines;	// 0x2a559
// declared property getter: - (id)formattedAddressLines;	// 0x2a549
- (void)writeTo:(id)to;	// 0x2a399
- (BOOL)readFrom:(id)from;	// 0x2a1f9
- (id)dictionaryRepresentation;	// 0x2a179
- (id)description;	// 0x2a109
- (id)componentAtIndex:(unsigned)index;	// 0x2a0e9
- (unsigned)componentsCount;	// 0x2a0c9
- (void)addComponent:(id)component;	// 0x2a065
- (id)formattedAddressLineAtIndex:(unsigned)index;	// 0x2a045
- (unsigned)formattedAddressLinesCount;	// 0x2a025
- (void)addFormattedAddressLine:(id)line;	// 0x29fc1
- (void)dealloc;	// 0x29f69
@end
