/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, PXPeopleScalableAvatarView, NSString;

@interface PXPeopleBootstrapHeaderView : UICollectionReusableView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PXPeopleScalableAvatarView* _avatarView;

}

@property (nonatomic,retain) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) PXPeopleScalableAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
-(void)setPerson:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setAvatarView:(PXPeopleScalableAvatarView *)arg1 ;
-(PXPeopleScalableAvatarView *)avatarView;
@end
