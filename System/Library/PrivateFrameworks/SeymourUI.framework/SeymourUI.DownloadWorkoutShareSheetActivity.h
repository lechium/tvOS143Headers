/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivity.h>

@class NSString, UIImage;

@interface SeymourUI.DownloadWorkoutShareSheetActivity : UIActivity {

	 assetClient;
	 storefrontLocalizer;
	 workoutIdentifier;

}

@property (readonly,nonatomic) NSString * activityType; 
@property (readonly,nonatomic) NSString * activityTitle; 
@property (readonly,nonatomic) UIImage * activityImage; 
+(long long)activityCategory;
-(id)init;
-(NSString *)activityType;
-(UIImage *)activityImage;
-(NSString *)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
@end

