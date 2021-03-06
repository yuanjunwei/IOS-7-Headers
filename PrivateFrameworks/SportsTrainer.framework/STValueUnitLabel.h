/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UILabel;

@interface STValueUnitLabel : UIView
{
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    float _labelSpacing;
    int _textAlignment;
    unsigned int _reversesLabels:1;
    unsigned int _forceLayout:1;
}

@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) float labelSpacing; // @synthesize labelSpacing=_labelSpacing;
@property(readonly, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(readonly, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
- (BOOL)_labelsNeedSizing;
- (void)_sizeLabelsToFit;
@property(nonatomic) BOOL reversesLabels;
- (void)layoutSubviews;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNeedsDisplay;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

