/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IOUSBHostObject, NSRecursiveLock;

@interface IOUSBHostInterestNotificationReference : NSObject {

	BOOL _interestNotificationPortDestroyed;
	IOUSBHostObject* _hostObject;
	NSRecursiveLock* _interestNotificationLock;

}

@property (__weak) IOUSBHostObject * hostObject;                            //@synthesize hostObject=_hostObject - In the implementation block
@property (assign) BOOL interestNotificationPortDestroyed;                  //@synthesize interestNotificationPortDestroyed=_interestNotificationPortDestroyed - In the implementation block
@property (retain) NSRecursiveLock * interestNotificationLock;              //@synthesize interestNotificationLock=_interestNotificationLock - In the implementation block
-(void)setInterestNotificationPortDestroyed:(BOOL)arg1 ;
-(void)setHostObject:(IOUSBHostObject *)arg1 ;
-(void)setInterestNotificationLock:(NSRecursiveLock *)arg1 ;
-(NSRecursiveLock *)interestNotificationLock;
-(id)initWithHostObject:(id)arg1 ;
-(IOUSBHostObject *)hostObject;
-(BOOL)interestNotificationPortDestroyed;
@end
