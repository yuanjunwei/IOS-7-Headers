/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

@class SKUIClientContext, SKUIGift, SKUIGiftItemView, SKUIGiftTheme, UIImage, UIImageView, UILabel;

@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell
{
    SKUIClientContext *_clientContext;
    SKUIGift *_gift;
    UIImageView *_headerImageView;
    SKUIGiftItemView *_itemView;
    UILabel *_messageLabel;
    UILabel *_priceLabel;
    UILabel *_senderNameLabel;
    UILabel *_senderNameLabelLabel;
    SKUIGiftTheme *_theme;
}

@property(retain, nonatomic) SKUIGiftTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_setSenderName:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setHeaderImage:(id)arg1;
- (void)_reloadItemView;
- (id)_itemView;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *itemImage;
- (void)reloadThemeHeaderImage;

@end
