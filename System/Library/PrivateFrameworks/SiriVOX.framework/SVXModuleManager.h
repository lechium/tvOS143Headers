/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, SVXModuleInstanceMap;

@interface SVXModuleManager : NSObject {

	NSDictionary* _modulesByIdentifier;
	SVXModuleInstanceMap* _moduleInstanceMap;

}
-(id)init;
-(void)stop;
-(void)_startWithModuleInstanceMap:(id)arg1 platformDependencies:(id)arg2 ;
-(void)_stopWithModuleInstanceMap:(id)arg1 ;
-(void)startWithPlatformDependencies:(id)arg1 ;
@end

