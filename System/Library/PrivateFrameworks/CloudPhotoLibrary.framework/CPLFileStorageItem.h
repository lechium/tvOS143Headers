/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLResourceIdentity, NSDate;

@interface CPLFileStorageItem : NSObject <NSCopying> {

	BOOL _original;
	BOOL _markedForDelete;
	CPLResourceIdentity* _identity;
	NSDate* _lastAccessDate;

}

@property (nonatomic,readonly) CPLResourceIdentity * identity;                             //@synthesize identity=_identity - In the implementation block
@property (getter=isOriginal,nonatomic,readonly) BOOL original;                            //@synthesize original=_original - In the implementation block
@property (getter=isMarkedForDelete,nonatomic,readonly) BOOL markedForDelete;              //@synthesize markedForDelete=_markedForDelete - In the implementation block
@property (nonatomic,readonly) NSDate * lastAccessDate;                                    //@synthesize lastAccessDate=_lastAccessDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(CPLResourceIdentity *)identity;
-(BOOL)isMarkedForDelete;
-(BOOL)isOriginal;
-(id)initWithIdentity:(id)arg1 original:(BOOL)arg2 markedForDelete:(BOOL)arg3 lastAccessDate:(id)arg4 ;
-(NSDate *)lastAccessDate;
@end

