/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Cards/CRBundleManager.h>

@class NSMutableSet;

@interface _CRKProviderBundleManager : CRBundleManager {

	NSMutableSet* _providerBundles;

}
+(id)sharedInstance;
+(id)bundleDirectoryName;
+(Class)bundleClass;
-(void)getProviderBundlesWithCompletion:(/*^block*/id)arg1 ;
@end

