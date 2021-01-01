/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLSidecar.h>

@class NSString, NSNumber, NSDate, PLManagedAsset, NSURL, PLInternalResource, NSManagedObjectID;

@interface PLInternalResourceSidecarRepresentation : NSObject <PLSidecar> {

	PLInternalResource* _resource;

}

@property (assign,nonatomic,__weak) PLInternalResource * resource;                  //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) NSNumber * index; 
@property (nonatomic,readonly) NSDate * captureDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) NSNumber * compressedSize; 
@property (nonatomic,readonly) PLManagedAsset * asset; 
@property (nonatomic,readonly) short indexValue; 
@property (nonatomic,readonly) unsigned long long compressedSizeValue; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (assign,nonatomic) long long ptpTrashedState; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) unsigned resourceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSURL *)fileURL;
-(NSNumber *)index;
-(NSString *)filename;
-(NSDate *)modificationDate;
-(NSManagedObjectID *)objectID;
-(id)initWithResource:(id)arg1 ;
-(PLInternalResource *)resource;
-(unsigned)resourceType;
-(id)extension;
-(PLManagedAsset *)asset;
-(void)setResource:(PLInternalResource *)arg1 ;
-(NSString *)originalFilename;
-(NSString *)uniformTypeIdentifier;
-(long long)ptpTrashedState;
-(void)setPtpTrashedState:(long long)arg1 ;
-(NSNumber *)compressedSize;
-(NSDate *)captureDate;
-(short)indexValue;
-(unsigned long long)compressedSizeValue;
@end

