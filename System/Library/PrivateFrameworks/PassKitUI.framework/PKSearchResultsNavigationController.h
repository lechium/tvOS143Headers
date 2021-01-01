/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKNavigationController.h>

@class PKSearchResultsSearchController;

@interface PKSearchResultsNavigationController : PKNavigationController {

	PKSearchResultsSearchController* _searchController;

}

@property (assign,nonatomic,__weak) PKSearchResultsSearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(PKSearchResultsSearchController *)searchController;
-(void)setSearchController:(PKSearchResultsSearchController *)arg1 ;
@end

