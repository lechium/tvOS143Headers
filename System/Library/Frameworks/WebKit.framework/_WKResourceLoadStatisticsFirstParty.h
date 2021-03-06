/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKResourceLoadStatisticsFirstParty : NSObject <WKObject> {

	ObjectStorage<API::ResourceLoadStatisticsFirstParty> _firstParty;
	BOOL _thirdPartyStorageAccessGranted;

}

@property (nonatomic,readonly) NSString * firstPartyDomain; 
@property (nonatomic,readonly) BOOL thirdPartyStorageAccessGranted;              //@synthesize thirdPartyStorageAccessGranted=_thirdPartyStorageAccessGranted - In the implementation block
@property (nonatomic,readonly) double timeLastUpdated; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(Object*)_apiObject;
-(NSString *)firstPartyDomain;
-(BOOL)storageAccess;
-(double)timeLastUpdated;
-(BOOL)thirdPartyStorageAccessGranted;
@end

