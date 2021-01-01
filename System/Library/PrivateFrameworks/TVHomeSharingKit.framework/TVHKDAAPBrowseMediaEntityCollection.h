/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaEntityCollection.h>

@class TVHKMediaEntityType, TVHKDAAPBrowseMediaEntityCollectionIdentifier;

@interface TVHKDAAPBrowseMediaEntityCollection : TVHKMediaEntityCollection {

	TVHKMediaEntityType* _type;
	TVHKDAAPBrowseMediaEntityCollectionIdentifier* _browseMediaEntityCollectionIdentifier;

}

@property (nonatomic,copy) TVHKDAAPBrowseMediaEntityCollectionIdentifier * browseMediaEntityCollectionIdentifier;              //@synthesize browseMediaEntityCollectionIdentifier=_browseMediaEntityCollectionIdentifier - In the implementation block
-(id)type;
-(id)identifier;
-(unsigned long long)protocol;
-(unsigned long long)persistentID;
-(unsigned long long)nonPersistentID;
-(id)initWithMediaCategoryType:(unsigned long long)arg1 mediaEntityCollectionType:(unsigned long long)arg2 mediaServerIdentifier:(id)arg3 requestedProperties:(id)arg4 entity:(id)arg5 ;
-(id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(TVHKDAAPBrowseMediaEntityCollectionIdentifier *)browseMediaEntityCollectionIdentifier;
-(unsigned long long)imageNonPersistentID;
-(void)setBrowseMediaEntityCollectionIdentifier:(TVHKDAAPBrowseMediaEntityCollectionIdentifier *)arg1 ;
@end

