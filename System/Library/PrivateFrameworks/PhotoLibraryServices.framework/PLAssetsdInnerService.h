/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLAssetsdServicePermissions, PLLazyObject;

@interface PLAssetsdInnerService : NSObject {

	PLAssetsdServicePermissions* _permissions;
	long long _requiredState;
	PLLazyObject* _lazyService;

}
-(void)getInnerServiceWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithPermissions:(id)arg1 requiredLibraryServicesState:(long long)arg2 lazyService:(id)arg3 ;
-(void)_awaitForRequiredLibraryStateWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)instantiateInnerService;
@end

