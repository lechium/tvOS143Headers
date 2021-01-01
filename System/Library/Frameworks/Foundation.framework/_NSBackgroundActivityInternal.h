/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface _NSBackgroundActivityInternal : NSObject {

	NSString* _identifier;
	double _interval;
	double _tolerance;
	double _delay;
	/*^block*/id _activity;
	/*^block*/id _checkInHandler;
	BOOL _repeats;
	BOOL _preregistered;
	BOOL _appRefresh;
	NSObject*<OS_xpc_object> _additionalProperties;
	long long _qualityOfService;
	NSObject*<OS_xpc_object> _currentActivity;

}
-(id)init;
-(void)dealloc;
@end
