/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MIME/MFObservable.h>
#import <libobjc.A.dylib/MFConnectableObservable.h>

@protocol MFObservable;
@class MFCancelationToken, NSLock, NSMapTable, NSString;

@interface _MFConnectableObservable : MFObservable <MFConnectableObservable> {

	id<MFObservable> _observable;
	MFCancelationToken* _cancelable;
	NSLock* _lock;
	NSMapTable* _observersToCancelable;
	BOOL _connected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)connect;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
@end

