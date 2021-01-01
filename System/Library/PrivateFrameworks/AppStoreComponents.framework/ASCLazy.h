/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppStoreComponents/AppStoreComponents-Structs.h>
@interface ASCLazy : NSObject {

	os_unfair_lock_s _loadingGuard;
	id _objectIfLoaded;
	/*^block*/id _factory;

}

@property (retain) id objectIfLoaded;                                      //@synthesize objectIfLoaded=_objectIfLoaded - In the implementation block
@property (nonatomic,copy,readonly) id factory;                            //@synthesize factory=_factory - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s loadingGuard;              //@synthesize loadingGuard=_loadingGuard - In the implementation block
@property (readonly) id object; 
-(id)description;
-(id)object;
-(id)initWithFactory:(/*^block*/id)arg1 ;
-(id)factory;
-(id)objectIfLoaded;
-(void)setObjectIfLoaded:(id)arg1 ;
-(os_unfair_lock_s)loadingGuard;
@end

