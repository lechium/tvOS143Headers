/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _HMContext;

@interface HMSettingsMessageHandler : NSObject {

	_HMContext* _context;

}

@property (retain) _HMContext * context;              //@synthesize context=_context - In the implementation block
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(void)sendUpdateValueMessage:(id)arg1 value:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

