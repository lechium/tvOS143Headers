/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray;

@interface TVTextMetadataView : UIView {

	NSArray* _metadataItems;
	NSMutableArray* _titleLabels;
	NSMutableArray* _valueLabels;

}

@property (nonatomic,retain) NSMutableArray * titleLabels;              //@synthesize titleLabels=_titleLabels - In the implementation block
@property (nonatomic,retain) NSMutableArray * valueLabels;              //@synthesize valueLabels=_valueLabels - In the implementation block
@property (nonatomic,copy) NSArray * metadataItems;                     //@synthesize metadataItems=_metadataItems - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSArray *)metadataItems;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateColors;
-(void)setMetadataItems:(NSArray *)arg1 ;
-(id)_metadataTitleLabel;
-(id)_metadataValueLabel;
-(NSMutableArray *)titleLabels;
-(id)_colorForTitleLabel:(id)arg1 ;
-(NSMutableArray *)valueLabels;
-(id)_colorForValueLabel:(id)arg1 ;
-(void)setTitleLabels:(NSMutableArray *)arg1 ;
-(void)setValueLabels:(NSMutableArray *)arg1 ;
@end

