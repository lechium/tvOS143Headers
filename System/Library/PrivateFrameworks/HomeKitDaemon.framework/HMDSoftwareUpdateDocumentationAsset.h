/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/SZExtractorDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSUUID, HMSoftwareUpdateDocumentationMetadata, NSURLSession, SZExtractor, NSInputStream, NSURL, HMSoftwareUpdateDocumentation, NSString, NSArray;

@interface HMDSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, NSURLSessionDownloadDelegate, SZExtractorDelegate, NSSecureCoding> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _shouldAutomaticallyCache;
	long long _state;
	NSUUID* _identifier;
	HMSoftwareUpdateDocumentationMetadata* _metadata;
	NSURLSession* _URLSession;
	SZExtractor* _extrator;
	NSInputStream* _archivedFileStream;

}

@property (nonatomic,retain) NSURLSession * URLSession;                               //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,retain) SZExtractor * extrator;                                  //@synthesize extrator=_extrator - In the implementation block
@property (nonatomic,retain) NSInputStream * archivedFileStream;                      //@synthesize archivedFileStream=_archivedFileStream - In the implementation block
@property (assign) BOOL shouldAutomaticallyCache;                                     //@synthesize shouldAutomaticallyCache=_shouldAutomaticallyCache - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMSoftwareUpdateDocumentationMetadata * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (readonly) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) HMSoftwareUpdateDocumentation * documentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(BOOL)supportsSecureCoding;
+(id)assetWithURL:(id)arg1 ;
+(id)logCategory;
+(id)assetDirectoryURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(long long)state;
-(NSURL *)URL;
-(void)setState:(long long)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(id)bundleURL;
-(HMSoftwareUpdateDocumentationMetadata *)metadata;
-(NSString *)shortDescription;
-(NSString *)propertyDescription;
-(void)setExtractionProgress:(double)arg1 ;
-(BOOL)purgeWithError:(id*)arg1 ;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(NSURLSession *)URLSession;
-(BOOL)saveWithError:(id*)arg1 ;
-(id)metadataURL;
-(HMSoftwareUpdateDocumentation *)documentation;
-(id)archiveURL;
-(id)logIdentifier;
-(void)startCaching;
-(void)setShouldAutomaticallyCache:(BOOL)arg1 ;
-(void)startDownload;
-(void)startUnarchive;
-(void)cancelDownload;
-(void)setArchivedFileStream:(NSInputStream *)arg1 ;
-(void)setExtrator:(SZExtractor *)arg1 ;
-(NSInputStream *)archivedFileStream;
-(SZExtractor *)extrator;
-(id)initWithDocumentationMetadata:(id)arg1 ;
-(BOOL)shouldAutomaticallyCache;
-(void)finishDownload;
-(void)cancelUnarchive;
-(void)finishUnarchive;
@end

