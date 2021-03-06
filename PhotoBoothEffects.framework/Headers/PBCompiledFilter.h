/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */




@interface PBCompiledFilter : NSObject {
	unsigned _program;	// 4 = 0x4
	unsigned _vao;	// 8 = 0x8
	unsigned _vbo;	// 12 = 0xc
	unsigned *_uniforms;	// 16 = 0x10
	int _uniformCount;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) unsigned program;	// G=0x19dd; @synthesize=_program
@property(readonly, assign, nonatomic) unsigned *uniforms;	// G=0x19cd; @synthesize=_uniforms
@property(readonly, assign, nonatomic) int uniformCount;	// G=0x19bd; @synthesize=_uniformCount
- (id)initWithProgram:(unsigned)program uniforms:(unsigned *)uniforms uniformCount:(int)count;	// 0x2751
- (void)dealloc;	// 0x270d
// declared property getter: - (int)uniformCount;	// 0x19bd
// declared property getter: - (unsigned *)uniforms;	// 0x19cd
// declared property getter: - (unsigned)program;	// 0x19dd
@end
