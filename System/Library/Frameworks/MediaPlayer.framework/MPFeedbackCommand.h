/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSString;

@interface MPFeedbackCommand : MPRemoteCommand {

	long long _presentationStyle;
	BOOL _active;
	NSString* _localizedTitle;
	NSString* _localizedShortTitle;

}

@property (assign,getter=isActive,nonatomic) BOOL active;               //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                   //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedShortTitle;              //@synthesize localizedShortTitle=_localizedShortTitle - In the implementation block
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(long long)presentationStyle;
-(void)setPresentationStyle:(long long)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setLocalizedShortTitle:(NSString *)arg1 ;
-(id)newCommandEventWithState:(long long)arg1 ;
-(NSString *)localizedShortTitle;
@end

