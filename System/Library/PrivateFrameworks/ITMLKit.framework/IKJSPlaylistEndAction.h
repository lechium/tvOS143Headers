/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlaylistEndAction.h>

@protocol IKJSPlaylistEndAction <JSExport>
@property (readonly) long long STOP; 
@property (readonly) long long PAUSE; 
@property (readonly) long long WAIT_FOR_MORE_ITEMS; 
@required
-(long long)STOP;
-(long long)PAUSE;
-(long long)WAIT_FOR_MORE_ITEMS;

@end


@interface IKJSPlaylistEndAction : IKJSObject <IKJSPlaylistEndAction>

@property (readonly) long long STOP; 
@property (readonly) long long PAUSE; 
@property (readonly) long long WAIT_FOR_MORE_ITEMS; 
-(id)init;
-(long long)STOP;
-(long long)PAUSE;
-(long long)WAIT_FOR_MORE_ITEMS;
@end

