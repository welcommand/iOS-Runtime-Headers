/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@interface CSLUIPBUIPluginListResponse : PBCodable <NSCopying> {
    NSMutableArray * _names;
    NSMutableArray * _usages;
}

@property (nonatomic, retain) NSMutableArray *names;
@property (nonatomic, retain) NSMutableArray *usages;

- (void).cxx_destruct;
- (void)addName:(id)arg1;
- (void)addUsage:(id)arg1;
- (void)clearNames;
- (void)clearUsages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nameAtIndex:(unsigned int)arg1;
- (id)names;
- (unsigned int)namesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setNames:(id)arg1;
- (void)setUsages:(id)arg1;
- (id)usageAtIndex:(unsigned int)arg1;
- (id)usages;
- (unsigned int)usagesCount;
- (void)writeTo:(id)arg1;

@end
