/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIProgressView, NSArray;

@interface PXOnboardingStatusUIView : UIView {

	BOOL _paused;
	double _progress;
	NSString* _title;
	NSString* _descriptionText;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIProgressView* _progressView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                 //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                      //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) double progress;                            //@synthesize progress=_progress - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                //@synthesize paused=_paused - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                   //@synthesize descriptionText=_descriptionText - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(double)progress;
-(BOOL)isPaused;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)constraints;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)commonInit;
-(void)setConstraints:(NSArray *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)updateConstraints;
-(void)_createViews;
-(UIProgressView *)progressView;
-(UILabel *)descriptionLabel;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

