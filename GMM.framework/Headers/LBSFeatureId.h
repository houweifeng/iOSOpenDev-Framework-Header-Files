/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>


@interface LBSFeatureId : XXUnknownSuperclass {
	unsigned long long _cellId;	// 4 = 0x4
	unsigned long long _fprint;	// 12 = 0xc
}
@property(assign, nonatomic) unsigned long long fprint;	// G=0x29f3d; S=0x29f55; @synthesize=_fprint
@property(assign, nonatomic) unsigned long long cellId;	// G=0x29f11; S=0x29f29; @synthesize=_cellId
// declared property setter: - (void)setFprint:(unsigned long long)fprint;	// 0x29f55
// declared property getter: - (unsigned long long)fprint;	// 0x29f3d
// declared property setter: - (void)setCellId:(unsigned long long)anId;	// 0x29f29
// declared property getter: - (unsigned long long)cellId;	// 0x29f11
- (void)writeTo:(id)to;	// 0x29ebd
- (BOOL)readFrom:(id)from;	// 0x29dc5
- (id)dictionaryRepresentation;	// 0x29d11
- (id)description;	// 0x29ca1
- (void)dealloc;	// 0x29c75
@end
