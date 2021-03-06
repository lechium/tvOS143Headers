/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface PRSessionStartNotification : NSObject {

	long long _notificationType;
	NSNumber* _bluetoothConnectionEventCounterValue;

}

@property (readonly) long long notificationType;                                   //@synthesize notificationType=_notificationType - In the implementation block
@property (readonly) NSNumber * bluetoothConnectionEventCounterValue;              //@synthesize bluetoothConnectionEventCounterValue=_bluetoothConnectionEventCounterValue - In the implementation block
+(id)createWithBluetoothConnectionEventCounterValue:(id)arg1 ;
-(id)init;
-(long long)notificationType;
-(void)_setType:(long long)arg1 ;
-(void)_setBluetoothConnectionEventCounterValue:(id)arg1 ;
-(NSNumber *)bluetoothConnectionEventCounterValue;
@end

