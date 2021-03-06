/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UICollectionViewLayout.h"

@class CADisplayLink, CKTranscriptCollectionViewLayoutAttributes, NSArray;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout
{
    BOOL _easingUp;
    BOOL _initialLoad;
    float _anchorYPosition;
    NSArray *_layoutAttributes;
    CADisplayLink *_displayLink;
    CKTranscriptCollectionViewLayoutAttributes *_boundingItemAttributes;
    double _prevTimestamp;
    struct CGSize _contentSize;
    struct CGRect _visibleBounds;
}

+ (Class)layoutAttributesClass;
@property(nonatomic, getter=isInitialLoad) BOOL initialLoad; // @synthesize initialLoad=_initialLoad;
@property(nonatomic) BOOL easingUp; // @synthesize easingUp=_easingUp;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) double prevTimestamp; // @synthesize prevTimestamp=_prevTimestamp;
@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property(retain, nonatomic) CKTranscriptCollectionViewLayoutAttributes *boundingItemAttributes; // @synthesize boundingItemAttributes=_boundingItemAttributes;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) NSArray *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) float anchorYPosition; // @synthesize anchorYPosition=_anchorYPosition;
- (float)bezierPointForPercentage:(float)arg1 anchor1:(struct CGPoint)arg2 anchor2:(struct CGPoint)arg3 control1:(struct CGPoint)arg4 control2:(struct CGPoint)arg5;
- (void)updateContentSize;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)_layoutAttributesForBoundingItem;
- (void)invalidateDisplayLink;
- (void)reloadData;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)init;
- (void)dealloc;

@end

