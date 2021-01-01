/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableDictionary, NSDictionary, NSLayoutConstraint;

@interface TVPRelatedContentView : UIView {

	double _presentationProgress;
	NSMutableDictionary* _viewsByContentType;
	NSMutableDictionary* _preferredSizeByContentType;
	NSDictionary* _containersByContentType;
	NSLayoutConstraint* _secondaryWidthConstraint;
	NSLayoutConstraint* _tertiaryWidthConstraint;
	NSLayoutConstraint* _tertiaryHeightConstraint;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _primaryTrailingConstraint;
	NSLayoutConstraint* _primaryTopConstraint;
	NSLayoutConstraint* _primaryBottomConstraint;

}

@property (nonatomic,retain) NSMutableDictionary * viewsByContentType;                      //@synthesize viewsByContentType=_viewsByContentType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * preferredSizeByContentType;              //@synthesize preferredSizeByContentType=_preferredSizeByContentType - In the implementation block
@property (nonatomic,retain) NSDictionary * containersByContentType;                        //@synthesize containersByContentType=_containersByContentType - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * secondaryWidthConstraint;                 //@synthesize secondaryWidthConstraint=_secondaryWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tertiaryWidthConstraint;                  //@synthesize tertiaryWidthConstraint=_tertiaryWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tertiaryHeightConstraint;                 //@synthesize tertiaryHeightConstraint=_tertiaryHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingConstraint;                        //@synthesize leadingConstraint=_leadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * primaryTrailingConstraint;                //@synthesize primaryTrailingConstraint=_primaryTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * primaryTopConstraint;                     //@synthesize primaryTopConstraint=_primaryTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * primaryBottomConstraint;                  //@synthesize primaryBottomConstraint=_primaryBottomConstraint - In the implementation block
@property (assign,nonatomic) double presentationProgress;                                   //@synthesize presentationProgress=_presentationProgress - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSMutableDictionary *)preferredSizeByContentType;
-(id)_keyForContentType:(long long)arg1 ;
-(NSLayoutConstraint *)secondaryWidthConstraint;
-(NSLayoutConstraint *)tertiaryWidthConstraint;
-(NSLayoutConstraint *)tertiaryHeightConstraint;
-(NSLayoutConstraint *)leadingConstraint;
-(NSLayoutConstraint *)primaryTopConstraint;
-(NSLayoutConstraint *)primaryTrailingConstraint;
-(NSLayoutConstraint *)primaryBottomConstraint;
-(NSMutableDictionary *)viewsByContentType;
-(id)viewForContentType:(long long)arg1 ;
-(NSDictionary *)containersByContentType;
-(CGSize)preferredSizeForContentType:(long long)arg1 ;
-(void)setPreferredSize:(CGSize)arg1 forContentType:(long long)arg2 ;
-(void)setPresentationProgress:(double)arg1 ;
-(void)setView:(id)arg1 forContentType:(long long)arg2 ;
-(double)presentationProgress;
-(void)setViewsByContentType:(NSMutableDictionary *)arg1 ;
-(void)setPreferredSizeByContentType:(NSMutableDictionary *)arg1 ;
-(void)setContainersByContentType:(NSDictionary *)arg1 ;
-(void)setSecondaryWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTertiaryWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTertiaryHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPrimaryTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPrimaryTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPrimaryBottomConstraint:(NSLayoutConstraint *)arg1 ;
@end

