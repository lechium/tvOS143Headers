/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSDeviceMessengerFilter;

@interface AMSDeviceUpdateHandlerInfo : NSObject {

	AMSDeviceMessengerFilter* _filter;
	/*^block*/id _block;

}

@property (nonatomic,retain) AMSDeviceMessengerFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy) id block;                                         //@synthesize block=_block - In the implementation block
-(id)block;
-(AMSDeviceMessengerFilter *)filter;
-(void)setFilter:(AMSDeviceMessengerFilter *)arg1 ;
-(void)setBlock:(id)arg1 ;
@end
