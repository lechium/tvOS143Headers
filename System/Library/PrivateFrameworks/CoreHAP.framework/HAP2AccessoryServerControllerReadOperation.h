/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2AccessoryServerControllerOperation.h>

@class NSIndexSet, HAP2ControllerReadRequest;

@interface HAP2AccessoryServerControllerReadOperation : HAP2AccessoryServerControllerOperation {

	NSIndexSet* _cachedCharacteristicIndices;
	HAP2ControllerReadRequest* _readRequest;

}
-(void)_cleanUp;
-(void)_sendRequest;
-(id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 readRequest:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(double)arg8 options:(unsigned long long)arg9 ;
@end
