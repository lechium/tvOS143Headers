/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVAudioSessionDelegateMediaPlayerOnly;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, NSString, NSDictionary;

@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigPlayerRef figPlayer;
	BOOL isAppAudioSession;
	BOOL isActive;
	NSString* category;
	NSString* mode;
	NSDictionary* activationContext;
	BOOL usingLongFormAudio;
	id<AVAudioSessionDelegateMediaPlayerOnly> delegate;

}
@end

