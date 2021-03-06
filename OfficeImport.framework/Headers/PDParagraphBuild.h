/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDBuild.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDParagraphBuild : PDBuild {
@private
	NSMutableArray *mTimeNodeDataList;	// 12 = 0xc
	double mAutoAdvanceTime;	// 16 = 0x10
	BOOL mIsReversedParagraphOrder;	// 24 = 0x18
	int mBuildLevel;	// 28 = 0x1c
	int mType;	// 32 = 0x20
}
@property(assign) double autoAdvanceTime;	// G=0x2175cd; S=0x2175e5; converted property
@property(assign) BOOL isReversedParagraphOrder;	// G=0x2175f9; S=0x217609; converted property
@property(assign) int buildLevel;	// G=0x217619; S=0x217629; converted property
@property(assign) int type;	// G=0x217639; S=0x217649; converted property
- (id)init;	// 0x219031
- (void)dealloc;	// 0x219141
- (int)timeNodeDataListCount;	// 0x219121
- (id)timeNodeDataAtIndex:(int)index;	// 0x2190fd
- (id)addTimeNodeData;	// 0x2190a5
- (id)timeNodeDataList;	// 0x2175bd
// converted property getter: - (double)autoAdvanceTime;	// 0x2175cd
// converted property setter: - (void)setAutoAdvanceTime:(double)time;	// 0x2175e5
// converted property getter: - (BOOL)isReversedParagraphOrder;	// 0x2175f9
// converted property setter: - (void)setIsReversedParagraphOrder:(BOOL)order;	// 0x217609
// converted property getter: - (int)buildLevel;	// 0x217619
// converted property setter: - (void)setBuildLevel:(int)level;	// 0x217629
// converted property getter: - (int)type;	// 0x217639
// converted property setter: - (void)setType:(int)type;	// 0x217649
@end
