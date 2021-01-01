/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLPhotoLibraryBundle, PLLazyObject;

@interface PLDatabaseContext : NSObject {

	PLPhotoLibraryBundle* _libraryBundle;
	PLLazyObject* _lazyHighPriorityTransientLibrary;
	PLLazyObject* _lazyLowPriorityTransientLibrary;
	PLLazyObject* _lazyCplLibrary;
	PLLazyObject* _lazyMomentLibrary;
	PLLazyObject* _lazyNonTransientLibrary;

}
-(void)dealloc;
-(void)invalidate;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(id)initWithLibraryBundle:(id)arg1 ;
-(id)newHighPriorityTransientLibrary;
-(id)highPriorityTransientLibrary;
-(id)newLowPriorityTransientLibrary;
-(id)lowPriorityTransientLibrary;
-(id)transientLibraryWithCurrentQoS;
-(void)perform:(/*^block*/id)arg1 ;
-(void)performSync:(/*^block*/id)arg1 ;
-(void)performTransactionSync:(/*^block*/id)arg1 ;
-(id)newCplLibrary;
-(id)cplLibrary;
-(id)newMomentLibrary;
-(id)momentLibrary;
-(id)newNonTransientLibrary;
-(id)nonTransientLibrary;
@end

