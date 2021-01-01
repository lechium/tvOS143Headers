/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TouchRemote/TouchRemote-Structs.h>
@interface _TRUserNotification : NSObject {

	int _response;
	CFUserNotificationRef _userNotification;
	unsigned long long _responseFlags;

}

@property (nonatomic,readonly) CFUserNotificationRef CFUserNotification;              //@synthesize userNotification=_userNotification - In the implementation block
@property (nonatomic,readonly) int response;                                          //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) unsigned long long responseFlags;                      //@synthesize responseFlags=_responseFlags - In the implementation block
@property (nonatomic,readonly) BOOL didAccept; 
+(id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 ;
+(id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 isTopMost:(BOOL)arg5 dismissOnUnlock:(BOOL)arg6 ;
-(void)dealloc;
-(void)cancel;
-(int)response;
-(void)show;
-(unsigned long long)responseFlags;
-(id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(BOOL)didAccept;
-(id)textFieldValueAtIndex:(unsigned long long)arg1 ;
-(CFUserNotificationRef)CFUserNotification;
@end

