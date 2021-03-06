/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCollectionNode : SKNode {
    id /* block */  _animateBlock;
    SKAction * _appearAction;
    SKAction * _disappearAction;
    NSArray * _nodes;
    float  _radius;
}

@property (nonatomic, copy) id /* block */ animateBlock;
@property (nonatomic, retain) SKAction *appearAction;
@property (nonatomic, retain) SKAction *disappearAction;
@property (nonatomic, retain) NSArray *nodes;
@property (nonatomic) float radius;

+ (id)hours12;
+ (id)hours12ZeusWithFont:(int)arg1;
+ (id)hours4;
+ (id)hoursChrono;
+ (float)innerRadius;
+ (id)labels30Chrono;
+ (id)labels3Chrono;
+ (id)labels3_10_90Chrono;
+ (id)labels60Chrono;
+ (id)labels6Chrono;
+ (id)labels6_10_40Chrono;
+ (id)minutesPills;
+ (id)minutesUtilitarian;
+ (float)outerRadius;
+ (id)ticks120;
+ (id)ticks240;
+ (id)ticks30Chrono;
+ (id)ticks60;
+ (id)ticks60Chrono;
+ (id)ticks60Utilitarian;
+ (id)ticks6Chrono;
+ (id)ticksColorAnalog;
+ (id)ticksPills;

- (void).cxx_destruct;
- (id /* block */)animateBlock;
- (id)appearAction;
- (void)appearAnimated;
- (void)applyAppearanceFraction:(float)arg1;
- (void)applyAppearanceFraction:(float)arg1 inverted:(BOOL)arg2;
- (void)createSubNodes;
- (id)disappearAction;
- (void)disappearAnimated;
- (void)fade:(float)arg1 inverted:(BOOL)arg2;
- (void)fadeAndScale:(float)arg1;
- (void)fadeNodes:(float)arg1;
- (void)fadeNodes:(float)arg1 except:(id)arg2;
- (id)init;
- (id)initWithName:(id)arg1 nodes:(id)arg2 animateBlock:(id /* block */)arg3;
- (id)nodes;
- (float)radius;
- (void)scaleNodes:(float)arg1;
- (void)scaleNodes:(float)arg1 andResetNodesAtIndices:(id)arg2;
- (void)scaleNodes:(id)arg1 fraction:(float)arg2;
- (void)setAnimateBlock:(id /* block */)arg1;
- (void)setAppearAction:(id)arg1;
- (void)setDisappearAction:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setRadius:(float)arg1;
- (void)updateNodesWithOffset:(unsigned int)arg1 angleMultiplier:(float)arg2 rotate:(BOOL)arg3 round:(BOOL)arg4;
- (void)updateNodesWithOffset:(unsigned int)arg1 angleMultiplier:(float)arg2 scale:(float)arg3 rotate:(BOOL)arg4 round:(BOOL)arg5;

@end
