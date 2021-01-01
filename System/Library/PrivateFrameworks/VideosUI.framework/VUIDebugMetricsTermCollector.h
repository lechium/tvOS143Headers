/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VUIDebugMetricsTermCollector.h>
@class NSDictionary, NSArray;


@protocol VUIDebugMetricsTermCollector <NSObject>
@property (nonatomic,readonly) NSDictionary * primaryTerms; 
@property (nonatomic,readonly) NSArray * baseTerms; 
@property (nonatomic,readonly) NSArray * metricsKitTerms; 
@property (nonatomic,readonly) NSArray * filteredTerms; 
@required
-(NSDictionary *)primaryTerms;
-(NSArray *)baseTerms;
-(NSArray *)metricsKitTerms;
-(NSArray *)filteredTerms;

@end


@class NSDictionary, NSArray, NSString;

@interface VUIDebugMetricsTermCollector : NSObject <VUIDebugMetricsTermCollector>

@property (nonatomic,readonly) NSDictionary * primaryTerms; 
@property (nonatomic,readonly) NSArray * baseTerms; 
@property (nonatomic,readonly) NSArray * metricsKitTerms; 
@property (nonatomic,readonly) NSArray * filteredTerms; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)searchTerms;
-(id)pageTerms;
-(id)clickTerms;
-(id)impressionsTerms;
-(id)enterTerms;
-(id)exitTerms;
-(id)accountTerms;
-(id)pageRenderTerms;
-(NSDictionary *)primaryTerms;
-(NSArray *)baseTerms;
-(NSArray *)metricsKitTerms;
-(NSArray *)filteredTerms;
-(id)dialogTerms;
@end

