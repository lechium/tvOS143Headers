/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PFCloudKitImporterOptions, NSCloudKitMirroringImportRequest;

@interface PFCloudKitImporterWorkItem : NSObject {

	PFCloudKitImporterOptions* _options;
	NSCloudKitMirroringImportRequest* _request;

}

@property (nonatomic,readonly) PFCloudKitImporterOptions * options;                     //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringImportRequest * request;              //@synthesize request=_request - In the implementation block
-(void)dealloc;
-(NSCloudKitMirroringImportRequest *)request;
-(PFCloudKitImporterOptions *)options;
-(id)initWithOptions:(id)arg1 request:(id)arg2 ;
-(void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

