/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSArray;

@interface IMDServiceController : NSObject {

	NSMutableDictionary* _services;

}

@property (nonatomic,readonly) NSArray * allServices; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSArray *)allServices;
-(id)serviceWithName:(id)arg1 ;
-(void)registerSessionClassWithBundle:(id)arg1 ;
@end

