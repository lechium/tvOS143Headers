/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_nw_parameters;
@class NSObject;

@interface NRParameters : NSObject {

	unsigned char _serviceClass;
	NSObject*<OS_nw_parameters> _parameters;

}

@property (nonatomic,retain) NSObject*<OS_nw_parameters> parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) unsigned char serviceClass;                          //@synthesize serviceClass=_serviceClass - In the implementation block
-(id)description;
-(id)init;
-(id)initWithParameters:(id)arg1 ;
-(NSObject*<OS_nw_parameters>)parameters;
-(void)setServiceClass:(unsigned char)arg1 ;
-(unsigned char)serviceClass;
-(void)setParameters:(NSObject*<OS_nw_parameters>)arg1 ;
-(id)copyParameters;
@end

