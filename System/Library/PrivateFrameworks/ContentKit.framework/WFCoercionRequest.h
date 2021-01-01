/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFCoercionOptions, WFFileType, NSArray;

@interface WFCoercionRequest : NSObject <NSCopying> {

	/*^block*/id _objectRepresentationResultHandler;
	/*^block*/id _fileRepresentationResultHandler;
	/*^block*/id _contentItemsCompletionHandler;
	/*^block*/id _contentCollectionResultHandler;
	WFCoercionOptions* _options;
	long long _requestType;
	Class _objectClass;
	WFFileType* _fileType;
	NSArray* _contentItemClasses;

}

@property (nonatomic,readonly) id contentItemsCompletionHandler;                  //@synthesize contentItemsCompletionHandler=_contentItemsCompletionHandler - In the implementation block
@property (nonatomic,readonly) long long requestType;                             //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) Class objectClass;                                 //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,readonly) id objectRepresentationResultHandler;              //@synthesize objectRepresentationResultHandler=_objectRepresentationResultHandler - In the implementation block
@property (nonatomic,readonly) WFFileType * fileType;                             //@synthesize fileType=_fileType - In the implementation block
@property (nonatomic,readonly) id fileRepresentationResultHandler;                //@synthesize fileRepresentationResultHandler=_fileRepresentationResultHandler - In the implementation block
@property (nonatomic,readonly) NSArray * contentItemClasses;                      //@synthesize contentItemClasses=_contentItemClasses - In the implementation block
@property (nonatomic,readonly) id contentCollectionResultHandler;                 //@synthesize contentCollectionResultHandler=_contentCollectionResultHandler - In the implementation block
@property (nonatomic,retain) WFCoercionOptions * options;                         //@synthesize options=_options - In the implementation block
+(id)requestForCoercingToContentClasses:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)requestForCoercingToFileType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)requestForCoercingToObjectClass:(Class)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_requestForCoercingToContentClasses:(id)arg1 itemCompletionHandler:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WFCoercionOptions *)options;
-(void)setOptions:(WFCoercionOptions *)arg1 ;
-(WFFileType *)fileType;
-(Class)objectClass;
-(long long)requestType;
-(NSArray *)contentItemClasses;
-(id)fileRepresentationResultHandler;
-(id)objectRepresentationResultHandler;
-(id)contentCollectionResultHandler;
-(void)completeContentItemCoercionRequestWithResultItems:(id)arg1 originalItem:(id)arg2 error:(id)arg3 ;
-(id)contentItemsCompletionHandler;
@end

