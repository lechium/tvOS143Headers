/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHObjectReference.h>

@interface PHAssetReference : PHObjectReference {

	BOOL _trashed;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	unsigned long long _sourceType;

}

@property (nonatomic,readonly) long long mediaType;                           //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaSubtypes;              //@synthesize mediaSubtypes=_mediaSubtypes - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceType;                 //@synthesize sourceType=_sourceType - In the implementation block
@property (getter=isTrashed,nonatomic,readonly) BOOL trashed;                 //@synthesize trashed=_trashed - In the implementation block
+(id)representedType;
+(id)referenceForAsset:(id)arg1 ;
-(unsigned long long)sourceType;
-(long long)mediaType;
-(BOOL)isTrashed;
-(unsigned long long)mediaSubtypes;
-(id)initWithDictionary:(id)arg1 referenceType:(id)arg2 ;
-(id)dictionaryForReferenceType:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 mediaType:(long long)arg3 subtypes:(unsigned long long)arg4 sourceType:(unsigned long long)arg5 isTrashed:(BOOL)arg6 ;
@end

