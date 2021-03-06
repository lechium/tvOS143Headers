/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RESingleton.h>

@interface RERelevanceEngineDiagnosticRegistration : RESingleton {

	BOOL _supportsRegistration;

}
-(id)_init;
-(id)_defaultRegistrationDirectory;
-(id)_processesFileURL;
-(id)_allProcesses;
-(void)_accessEngineDataForProcess:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)checkinEngine:(id)arg1 ;
-(void)enumerateAvailableEngines:(/*^block*/id)arg1 ;
@end

