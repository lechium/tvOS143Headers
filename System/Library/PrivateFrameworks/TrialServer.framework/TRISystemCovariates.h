/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TRISystemCovariateProviding.h>

@class TRISystemConfiguration, NSDictionary;

@interface TRISystemCovariates : NSObject <TRISystemCovariateProviding> {

	TRISystemConfiguration* _sysConfig;
	NSDictionary* _dictionary;

}
-(id)objectForKey:(id)arg1 ;
-(id)dictionary;
-(id)initWithPaths:(id)arg1 ;
-(id)tri_contextValueWithName:(id)arg1 ;
-(id)getContextValueWithName:(id)arg1 ;
@end

