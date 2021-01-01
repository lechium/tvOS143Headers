/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/MAGraphSpecification.h>

@interface PGGraphSpecification : MAGraphSpecification
-(id)init;
-(Class)nodeClassWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(Class)edgeClassWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateNodeClassesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgeClassesUsingBlock:(/*^block*/id)arg1 ;
-(id)nodeClassByDomainAndLabel;
-(id)nodeClassByDomain;
-(id)edgeClassByDomainAndLabel;
-(id)edgeClassByDomain;
@end
