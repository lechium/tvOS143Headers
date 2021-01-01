/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXMemoriesBlacklistAccessoryViewSpec.h>

@protocol PXPerson;
@interface PXMemoriesBlacklistPersonAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec {

	id<PXPerson> _person;

}

@property (nonatomic,readonly) id<PXPerson> person;              //@synthesize person=_person - In the implementation block
+(id)specWithPerson:(id)arg1 ;
-(id<PXPerson>)person;
-(id)initWithPerson:(id)arg1 ;
@end

