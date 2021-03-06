/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUBaselinedBarSeries : FUChartSeries {
    UIColor * _barColor;
    NSArray * _barViews;
    float  _barWidth;
    NSNumber * _baselineAbsoluteYPos;
    float  _baselineGraphHeightPercent;
    float  _baselineValue;
    BOOL  _hideBarsBelowThreshold;
    NSArray * _plotPoints;
}

@property (nonatomic, retain) UIColor *barColor;
@property (nonatomic, retain) NSArray *barViews;
@property (nonatomic) float barWidth;
@property (nonatomic, retain) NSNumber *baselineAbsoluteYPos;
@property (nonatomic) float baselineGraphHeightPercent;
@property (nonatomic) float baselineValue;
@property (nonatomic) BOOL hideBarsBelowThreshold;
@property (nonatomic, retain) NSArray *plotPoints;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_baselinedRectBoundsForYValue:(float)arg1;
- (id)_getAbsoluteBaselineYPosition;
- (float)_getBarHeightForPointValue:(id)arg1;
- (float)_getBaselinedMaxYValueForYPlaneValue:(float)arg1;
- (float)_getBaselinedMinYValueForYPlaneValue:(float)arg1;
- (float)_getYValueForPointFromChartPointValue:(id)arg1;
- (id)barColor;
- (id)barViews;
- (float)barWidth;
- (id)baselineAbsoluteYPos;
- (float)baselineGraphHeightPercent;
- (float)baselineValue;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (BOOL)hideBarsBelowThreshold;
- (id)init;
- (void)layoutSubviews;
- (id)plotPoints;
- (void)setBarColor:(id)arg1;
- (void)setBarViews:(id)arg1;
- (void)setBarWidth:(float)arg1;
- (void)setBaselineAbsoluteYPos:(id)arg1;
- (void)setBaselineGraphHeightPercent:(float)arg1;
- (void)setBaselineValue:(float)arg1;
- (void)setHideBarsBelowThreshold:(BOOL)arg1;
- (void)setPlotPoints:(id)arg1;

@end
